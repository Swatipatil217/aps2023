//Find the Substring With Maximum Cost leetcode solution

class Solution:
    def maximumCostSubstring(self, s: str, chars: str, vals: List[int]) -> int:
        value_dict={char:val for char,val in zip(chars,vals)}
        max_cost=0
        for i in range(len(s)):
            for j in range(i+1,len(s)+1):
                sub_cost=0
                for char in s[i:j]:
                    if char in value_dict:
                        sub_cost+=value_dict[char]
                    else:
                        sub_cost+=ord(char)-ord('a')+1
                    max_cost=max(max_cost,sub_cost)
        return max_cost
