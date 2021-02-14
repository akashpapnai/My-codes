# Problem statement: https://www.interviewbit.com/problems/vowel-and-consonant-substrings/
class Solution:
    def solve(self,A):
        vowel_count = 0
        for i in A:
            if i=='a' or i=='e' or i=='i' or i=='o' or i=='u':
                vowel_count+=1
        return (vowel_count*(len(A)-vowel_count))%(10**9+7)
# Solution = vowel_count*consonent_count
A = 'inttrikjmbermrberk'
solve = Solution()
print(solve.solve(A))