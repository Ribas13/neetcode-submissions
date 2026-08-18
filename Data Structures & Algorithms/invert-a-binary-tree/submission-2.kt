/**
 * Definition for a binary tree node.
 * class TreeNode(var `val`: Int) {
 *     var left: TreeNode? = null
 *     var right: TreeNode? = null
 * }
 */

class Solution {
    fun invertTree(root: TreeNode?): TreeNode? {
        if (root == null) {
            return root
        }
        val swap = root.left
        root.left = root.right
        root.right = swap
        invertTree(root.left)
        invertTree(root.right)
        return root
    }
}
