class Solution {
    fun isValid(s: String): Boolean {
        val stack = LinkedList<Char>()

        // stack.addFirst(string) to push to the stack
        // stack.removeFirst() to pop
        // stack.peekFirst() to peek

        for (c in s) {
            when (c) {
                '{' -> stack.addFirst(c)
                '[' -> stack.addFirst(c)
                '(' -> stack.addFirst(c)
                else -> {
                    if (stack.size == 0)
                        return false
                    if (c == '}') {
                        if (stack.peekFirst() != '{')
                            return false
                        stack.removeFirst()
                    }
                    if (c == ']') {
                        if (stack.peekFirst() != '[')
                            return false
                        stack.removeFirst()
                    }
                    if (c == ')') {
                        if (stack.peekFirst() != '(')
                            return false
                        stack.removeFirst()
                    }
                }
            }
        }
        if (stack.size != 0)
            return false
        return true
    }
}
