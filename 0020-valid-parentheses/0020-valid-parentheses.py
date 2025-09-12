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
                    stack=stack[:-1]
                elif i==']' and stack[-1]=='[':
                    stack=stack[:-1]
                elif i=='}' and stack[-1]=='{':
                    stack=stack[:-1]
                else:
                    return False
        return not stack