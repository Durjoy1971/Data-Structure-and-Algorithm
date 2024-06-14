class Node {
    int value;
    Node left,right;
    public Node(int value)
    {
        this.value = value;
        left = right = null;
    }
}

class BinaryTree {
    Node root;

    BinaryTree() {
        root = null;
    }

    void postOrder(Node node){
        if(node == null){
            return;
        }

        postOrder(node.left);
        postOrder(node.right);
        System.out.print(node.value+" ");
    }

    void inOrder(Node node){
        if(node == null){
            return;
        }

        inOrder(node.left);
        System.out.print(node.value+" ");
        inOrder(node.right);
    }

    void preOrder(Node node){
        if(node == null){
            return;
        }
        System.out.print(node.value+" ");
        preOrder(node.left);
        preOrder(node.right);
    }
}

//           1
//      12       8
//   13   -   15  14
// 16 17 - -  - - - 18

public class TreeTraversal {

    public static void main(String[] args)
    {
        BinaryTree tree = new BinaryTree();

        tree.root = new Node(1);
        tree.root.left = new Node(12);
        tree.root.right = new Node(8);
        tree.root.left.left = new Node(13);
        tree.root.right.left = new Node(15);
        tree.root.right.right = new Node(14);
        tree.root.left.left.left = new Node(16);
        tree.root.left.left.right = new Node(17);
        tree.root.right.right.right = new Node(18);

        System.out.println("Preorder Traversal: ");
        // Preorder Traversal: Root -> Left -> Right
        // Output: 1 12 13 16 17 8 15 14 18
        tree.preOrder(tree.root);

        System.out.println("\nInorder Traversal: ");
        // Inorder Traversal: Left -> Root -> Right
        // Output: 16 13 17 12 1 15 8 14 18
        tree.inOrder(tree.root);

        System.out.println("\nPostorder Traversal: ");
        // Postorder Traversal: Left -> Right -> Root
        // Output: 16 17 13 12 15 18 14 8 1
        tree.postOrder(tree.root);

    }
}