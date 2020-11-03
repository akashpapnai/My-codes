def validPalindrome(s):
    i,j,count1,count2 = 0,len(s)-1,0,0
    while i<j:
        if s[i] == s[j]:
            i+=1
            j-=1
        else:
            i+=1
            count1+=1
    i,j = 0,len(s)-1
    while i<j:
        if s[i]==s[j]:
            i+=1
            j-=1
        else:
            j-=1
            count2+=1
    if count1 == 1 or count2 == 1:
        return True
    if count2 == 0 or count2 == 0:
        return True
    return False
    
string = 'aba'
print(validPalindrome(string))