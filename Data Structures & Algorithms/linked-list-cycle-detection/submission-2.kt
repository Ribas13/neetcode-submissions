/**
 * Definition for singly-linked list.
 * class ListNode(var `val`: Int) {
 *     var next: ListNode? = null
 * }
 */

class Solution {
    fun hasCycle(head: ListNode?): Boolean {
        var node = head
        var nodeB = head?.next
        while (node != null && nodeB != null) {
            node = node.next
            nodeB = nodeB.next?.next
            if (node == nodeB)
                return true
        }
        return false
    }
}
