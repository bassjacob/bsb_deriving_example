type tree = Leaf | Tree tree int tree;

/* Golly gee! No string nonsense here! */
let myTree = Tree Leaf 4 (Tree Leaf 0 Leaf);
print_endline (show_tree myTree);
