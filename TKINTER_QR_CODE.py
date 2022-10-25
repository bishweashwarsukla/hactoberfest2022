from tkinter import *
import random
import qrcode
from PIL import Image, ImageTk

class ENIGMA:
    def __init__(self,root):
        self.root=root
        self.root.title('PASSWORD X QRCODE')
        self.root.geometry('1050x1000+0+0')
        title=Label(self.root,text='PASSWORD X QRCODE',font=('arial',40,'bold'),bg='#000000',fg='green')
        title.pack(side=TOP,fill=X)

        #=============== VARIABLES ==================================

        self.pass_len=StringVar()
        
        #================= FRAMES =================================== 

        #=============== F1 ====================================
        FRAME1=Frame(self.root,bd=4, relief= RIDGE,bg='black')
        FRAME1.place(x=20,y=100,width=500, height= 500)

        pass_label=Label(FRAME1,text='PASSWORD LENGTH',font=('arial',20,'bold'),bg='black',fg='green')
        pass_label.grid(row=0,columnspan=2,padx=10)

        pass_entry=Entry(FRAME1,bd=4,font=('arial',20,'bold'),textvariable=self.pass_len,relief=GROOVE,bg='powder blue')
        pass_entry.grid(row=2,column=1,padx=10,pady=20,sticky='w')

        generate_btn=Button(FRAME1,text='GENERATE',width=15,height=3,font=('Elephant',9,'bold'),bg='white',command=self.get_password)
        generate_btn.grid(row=3,column=0,padx=10,pady=5)\


        generate_btn=Button(FRAME1,text='DISPLAY',width=15,height=3,font=('Elephant',9,'bold'),bg='white',command=self.display)
        generate_btn.grid(row=3,column=1,padx=10,pady=5)
        #=============== F2 ====================================
        

    #==================== PASSWORD GENERATOR =========================
    def get_password(self):

        A="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        a="abcdefghijklmnopqrstuvwxyz"
        N="1234567890"
        S="@#$%&*-_+."
        SIZE=self.pass_len.get()
        characters=list(A+a+N+S)
        random.shuffle(characters)
        PASSWORD=[]
        for i in range(int(SIZE)):
            PASSWORD.append(random.choice(characters))

        random.shuffle(PASSWORD)

        data="".join(PASSWORD)

        print(data)
        qr=qrcode.QRCode(version=1,box_size=10,border=5)
        qr.add_data(data)
        qr.make(fit=True)
        img=qr.make_image(fill_color='black',back_color='#FFFFFF')
        img.save('password.png')

    def display(self):
        FRAME2=Frame(self.root,bd=4, relief= RIDGE,bg='crimson')
        FRAME2.place(x=530,y=100,width=500, height= 500)

        canvas1 = Canvas(FRAME2, width="400", height="400", relief=RIDGE, bd=2)
        canvas1.pack(padx=10, pady=10)
        img = Image.open("password.png")
        img = ImageTk.PhotoImage(img)
        canvas1.create_image(200, 180, image=img)
        canvas1.image=img

root=Tk()
ob=ENIGMA(root)
root.mainloop()