import os
os.chdir(r'C:\Users\Akash Papnai\OneDrive\Documents\GitHub\My-codes\Companies')
filename = os.listdir()
print(filename)
for f in filename:
    file = open(f,'r')
    data = file.readlines()
    for i in range(len(data)):
        ans = ''
        if data[i][:4]=='http':
            for j in range(38,len(data[i])):
                if data[i][j]=='-':
                    ans+=' '
                    continue
                if data[i][j]=='/':
                    break
                ans+=data[i][j]
            ans = ans.split(' ')
            ans = [i.capitalize() for i in ans]
            ans = ' '.join(ans)
            ans += '\t\t\t\t\t- '
            data[i] = ans+data[i]
    data = ''.join(data)
    file = open(f,'w')
    file.write(data)

    file.close()

print('\n\n\nDone\n\n\n')