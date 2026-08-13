/**
 * Definition for singly-linked list.
 * class ListNode(var `val`: Int) {
 *     var next: ListNode? = null
 * }
 */

class Solution {
    fun reverseList(head: ListNode?): ListNode? {
        if (head == null)
            return head
        var nhead = head
        val newList = LinkedList<ListNode>()

        var nextptr = nhead.next
        nhead.next = null
        newList.addFirst(nhead)
        nhead = nextptr
        while (nhead != null) {
            nextptr = nhead.next
            nhead.next = newList.peekFirst()
            newList.addFirst(nhead)

            nhead = nextptr
        }
        return newList.peekFirst()
    }
}
