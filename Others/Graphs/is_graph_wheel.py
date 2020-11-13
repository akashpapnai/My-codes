def isWheel(adj):
    if len(adj)==4:
        return True if adj == [[0,1,1,1],[1,0,1,1],[1,1,0,1],[1,1,1,0]] else False
            
    for i in range(len(adj)):    # Handle diagonals
        if adj[i][i]!=False:
            return False
            
    i = 0
    flag,index = 0,-1
    while i<len(adj):            # Determine middle node
        number = [0,0]
        j=0
        while j<len(adj[0]):
            if adj[i][j]==False:
                number[0]+=1
            else:
                number[1]+=1
            j+=1
        if number[0]==1 and number[1]==len(adj[0])-1:
            flag+= 1
            index = i
        i+=1
    if flag>1 or flag ==0:
        return False
    for i in range(len(adj)):           # Determine corner nodes
        if i == index:
            continue
        number= [0,0]
        for j in range(len(adj)):
            if adj[i][j]==False:
                number[0]+=1
            else:
                number[1]+=1
        if number[1]!=3:
            return False
    return  True

adj=[[False,True,True,False,True], 
 [True,False,True,True,True], 
 [True,True,False,True,False], 
 [False,True,True,False,True], 
 [True,True,False,True,False]]

print(isWheel(adj))