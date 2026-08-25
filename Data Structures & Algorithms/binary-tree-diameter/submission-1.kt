/**
 * Definition for a binary tree node.
 * class TreeNode(var `val`: Int) {
 *     var left: TreeNode? = null
 *     var right: TreeNode? = null
 * }
 */

class Solution {
    var res: Int = 0
    fun diameterOfBinaryTree(root: TreeNode?): Int {
        dfs(root)
        return res
    }

    fun dfs(node: TreeNode?): Int {
        if (node == null) return 0

        val left = dfs(node.left)
        val right = dfs(node.right)

        res = max(res, left + right)
        return (1 + max(left, right))
    }
}
