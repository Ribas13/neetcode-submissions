/**
 * Definition for singly-linked list.
 * class ListNode(var `val`: Int) {
 *     var next: ListNode? = null
 * }
 */

class Solution {
    fun hasCycle(head: ListNode?): Boolean {
        if (head == null) return false
        var node = head
        var nodeB = head
        while (nodeB != null && nodeB.next != null) {
            nodeB = nodeB?.next?.next
            node = node?.next
            if (node == nodeB)
                return true
        }
        return false
    }
}
