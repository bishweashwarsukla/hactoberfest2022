import pandas as pd
import numpy as np
import re
import string
import nltk
#nltk.download('stopwords')
#nltk.download('punkt')
from nltk.corpus import stopwords

from nltk.tokenize import word_tokenize
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.model_selection import train_test_split


from sklearn.metrics import accuracy_score
from sklearn.naive_bayes import MultinomialNB
from sklearn.linear_model import LogisticRegression



stop_words = set(stopwords.words('english'))


def load_dataset(filename, cols):
    dataset = pd.read_csv(filename, encoding='latin-1')
    dataset.columns = cols
    return dataset


def remove_unwanted_cols(dataset, cols):
    for col in cols:
        del dataset[col]
    return dataset


def preprocess_tweet_text(tweet):
    tweet.lower()

    tweet = re.sub(r"http\S+|www\S+|https\S+", '', tweet, flags=re.MULTILINE)

    tweet = re.sub(r'\@\w+|\#', '', tweet)

    tweet = tweet.translate(str.maketrans('', '', string.punctuation))

    tweet_tokens = word_tokenize(tweet)
    filtered_words = [w for w in tweet_tokens if not w in stop_words]


    return " ".join(filtered_words)


def get_feature_vector(train_fit):
    vector = TfidfVectorizer(sublinear_tf=True)
    vector.fit(train_fit)
    return vector


def int_to_string(sentiment):
    if sentiment == 0:
        return "Negative"
    elif sentiment == 2:
        return "Neutral"
    else:
        return "Positive"



dataset = load_dataset(
    "training.csv", ['target', 't_id', 'created_at', 'query', 'user', 'text'])

n_dataset = remove_unwanted_cols(
    dataset, ['t_id', 'created_at', 'query', 'user'])

dataset.text = dataset['text'].apply(preprocess_tweet_text)



tf_vector = get_feature_vector(np.array(dataset.iloc[:, 1]).ravel())
X = tf_vector.transform(np.array(dataset.iloc[:, 1]).ravel())
y = np.array(dataset.iloc[:, 0]).ravel()
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=30)


NB_model = MultinomialNB()
NB_model.fit(X_train, y_train)
y_predict_nb = NB_model.predict(X_test)
print(accuracy_score(y_test, y_predict_nb))


LR_model = LogisticRegression(solver='lbfgs')
LR_model.fit(X_train, y_train)
y_predict_lr = LR_model.predict(X_test)
print(f'Accuracy is: {accuracy_score(y_test, y_predict_lr)}')

test_file_name = "saved_tweets/tweets_data.csv"
test_ds = load_dataset(
    test_file_name, ["t_id", "hashtag", "created_at", "user", "text"])
test_ds = remove_unwanted_cols(test_ds, ["t_id", "created_at", "user"])


test_ds.text = test_ds["text"].apply(preprocess_tweet_text)
test_feature = tf_vector.transform(np.array(test_ds.iloc[:, 1]).ravel())


test_prediction_lr = LR_model.predict(test_feature)


test_result_ds = pd.DataFrame(
    {'hashtag': test_ds.hashtag, 'prediction': test_prediction_lr})
test_result = test_result_ds.groupby(['hashtag']).max().reset_index()
test_result.columns = ['hashtag', 'predictions']
test_result.predictions = test_result['predictions'].apply(int_to_string)

print(test_result)