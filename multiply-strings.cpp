class Solution(object):
    def multiply(self, num1, num2):
        num3 = num4 = 0
        def StringToInt(num1):
            num3 = 0
            for i in num1:
                num3 = num3 * 10 + (ord(i) - 48) 
            return num3
        num3 = StringToInt(num1)
        num4 = StringToInt(num2)
        return str(num3 * num4)