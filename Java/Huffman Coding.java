public class Codec {
    HashMap<Character, String> HuffmanTable;
    HuffmanTreeNode root;
    
    public Codec() {
        this.HuffmanTable = new HashMap<>();
    }
    
    // Encodes a URL to a shortened URL.
    public String encode(String longUrl) {
        // creating frquency table.
        HashMap<Character, Integer> freq = new HashMap<>();
        for (char c : longUrl.toCharArray()) {
            freq.put(c, freq.getOrDefault(c, 0) + 1);
        }
        
        // adding characters and their frequency in priority queue.
        PriorityQueue<HuffmanTreeNode> pq = new PriorityQueue<>((a, b) -> a.val - b.val);
        for (char key : freq.keySet()) {
            pq.add(new HuffmanTreeNode(key, freq.get(key)));
        }
        
        // creating Huffman tree
        while (pq.size() > 1) {
            HuffmanTreeNode left = pq.poll();
            HuffmanTreeNode right = pq.poll();
            
            pq.offer(new HuffmanTreeNode('\0', left.val + right.val, left, right));
        }
        
        root = pq.poll();
        
        // filling global Huffman table
        createHuffmanTable(root, "");

        // encoding URL.
        StringBuilder tinyUrl = new StringBuilder("http://tinyurl.com/");
        for (char c : longUrl.toCharArray()) {
            tinyUrl.append(HuffmanTable.get(c));
        }
        
        return tinyUrl.toString();
    }

    // Decodes a shortened URL to its original URL.
    public String decode(String shortUrl) {
        HuffmanTreeNode currNode = root;
        StringBuilder longUrl = new StringBuilder();
        
        for (char c : shortUrl.substring(19).toCharArray()) {
            if (currNode.left == null && currNode.right == null) {
                longUrl.append(currNode.c);
                currNode = root;
            }
            
            if (c == '0') {
                currNode = currNode.left;
            } else if (c == '1') {
                currNode = currNode.right;
            }
        }
        longUrl.append(currNode.c);
        
        return longUrl.toString();
    }
    
    class HuffmanTreeNode {
        char c;
        int val;
        HuffmanTreeNode left;
        HuffmanTreeNode right;
        
        public HuffmanTreeNode (char c, int val, HuffmanTreeNode left, HuffmanTreeNode right) {
            this.c = c;
            this.val = val;
            this.left = left;
            this.right = right;
        }
        
        public HuffmanTreeNode (char c, int val) {
            this.c = c;
            this.val = val;
            this.left = null;
            this.right = null;
        }
    }
    
    void createHuffmanTable(HuffmanTreeNode node, String encoding) {
        if (node.left == null && node.right == null) {
            HuffmanTable.put(node.c, encoding);
            return;
        }
        
        createHuffmanTable(node.left, encoding + "0");
        createHuffmanTable(node.right, encoding + "1");
    }
}
