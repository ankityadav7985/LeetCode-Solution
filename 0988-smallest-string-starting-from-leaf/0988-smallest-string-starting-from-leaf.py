# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def smallestFromLeaf(self, root: Optional[TreeNode]) -> str:
        self.res = None
        path = []

        def dfs(node):
            if not node:
                return

            path.append(chr(node.val + ord('a')))

            if not node.left and not node.right:
                s = "".join(path[::-1])

                if self.res is None or s < self.res:
                    self.res = s

            dfs(node.left)
            dfs(node.right)

            path.pop()      

        dfs(root)
        return self.res