package Java.datastructure.impl;

import java.util.ArrayList;

public class BinaryTree {

	private static class Node {
		Node right, left;
		int data;

		Node(int data) {
			this.data = data;
			this.left = this.right = null;
		}
	}

	Node root;

	BinaryTree(int key) {
		root = new Node(key);
	}

	BinaryTree() {
		root = null;
	}

	//To print right view of binary tree.
	static void rightView(Node w) {
		ArrayList<Node> c = new ArrayList<>();
		newRightView(w, c, 0);
		for (Node e : c) {
			System.out.println(e.data);
		}
	}

	static void newRightView(Node c, ArrayList n, int l) {
		if (c == null)
			return;
		if (n.size() == l)
			n.add(c);
		newRightView(c.right, n, l + 1);
		newRightView(c.left, n, l + 1);


	}

	// TO PRINT LEFT VIEW OF BINARY TREE.
	static void leftView(Node w) {
		ArrayList<Node> c = new ArrayList<>();
		newLeftView(w, c, 0);
		for (Node e : c) {
			System.out.println(e.data);
		}
	}

	static void newLeftView(Node c, ArrayList n, int l) {
		if (c == null) {
			return;
		}
		if (n.size() == l) {
			n.add(c);
		}
		newLeftView(c.left, n, l + 1);
		newLeftView(c.right, n, l + 1);
	}


	public static void main(String[] args) {
		BinaryTree n = new BinaryTree();
		n.root = new Node(12);
		n.root.left = new Node(45);
		n.root.right = new Node(46);
		n.root.left.left = new Node(27);
		n.root.left.right = new Node(30);
		System.out.println("Left View of Java.datastructure.BinaryTree");
		leftView(n.root);
		System.out.println("Right view of Binary Tree");
		rightView(n.root);

	}

}