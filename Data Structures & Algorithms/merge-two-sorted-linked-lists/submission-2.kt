/**
 * Definition for singly-linked list.
 * class ListNode(var `val`: Int) {
 *     var next: ListNode? = null
 * }
 */

class Solution {
    fun mergeTwoLists(list1: ListNode?, list2: ListNode?): ListNode? {
        var left: ListNode? = list1
        var right: ListNode? = list2

        var res: ListNode = ListNode(0)
        var current = res
        while (left != null && right != null) {
            if (left.`val` <= right.`val`) {
                current.next = left
                left = left.next
            } else {
                current.next = right
                right = right.next
            }
            current = current.next!!
        }
        current.next = left ?: right
        return res!!.next
    }
}
