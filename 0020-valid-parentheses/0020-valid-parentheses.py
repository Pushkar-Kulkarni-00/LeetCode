class Solution:
    def isValid(self, s: str) -> bool:
        stack=[]
        for i in s:
            if i=='(' or i=='{' or i=='[':
                stack.append(i)
            else:
                if not stack:
                    return False
                elif i==')' and stack[-1]=='(':
                    stack.pop()
                elif i==']' and stack[-1]=='[':
                    stack.pop()
                elif i=='}' and stack[-1]=='{':
                    stack.pop()
                else:
                    return False
        return not stack