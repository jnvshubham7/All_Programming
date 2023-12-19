#
# @lc app=leetcode id=25 lang=python
#
# [25] Reverse Nodes in k-Group
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseKGroup(self, head, k):
        """
        :type head: ListNode
        :type k: int
        :rtype: ListNode
        """




         """
        :type head: ListNode
        :type k: int
        :rtype: ListNode
        """
        # Helper function to reverse a sublist from 'start' to 'end'.
        def reverse_sublist(start, end):
            prev, curr = None, start
            while curr != end:
                temp = curr.next
                curr.next = prev
                prev = curr
                curr = temp
            return prev

        # Helper function to find the length of the linked list.
        def get_length(node):
            length = 0
            while node:
                length += 1
                node = node.next
            return length

        # Calculate the length of the linked list.
        length = get_length(head)

        # Initialize pointers for reversing groups.
        dummy = ListNode(0)
        dummy.next = head
        prev_group_end = dummy

        # Reverse each group of k nodes.
        while length >= k:
            group_start = prev_group_end.next
            group_end = group_start
            for _ in range(k - 1):
                group_end = group_end.next

            next_group_start = group_end.next
            group_end.next = None

            # Reverse the current group.
            prev_group_end.next = reverse_sublist(group_start, group_end)
            group_start.next = next_group_start

            # Update pointers for the next iteration.
            prev_group_end = group_start
            length -= k

        return dummy.next
8080829046 




        
# @lc code=end

