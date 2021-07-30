import random
import time

def main():
    list_size = 10000
    sedge = []
    for s in range(15):
        if s == 0:
            n = 1
        else:
            n = 4**s + 3*(2**(s-1))+1
        sedge.append(n)
    #print(sedge)
    increment = []
    for q in range(len(sedge)-1, -1, -1):
        if list_size >sedge[q]:
            gap = sedge[q]
            increment.append(sedge[q])
            initial = q
    increment.append(0)
    s_time = time.time()
    inversion = 0
    for a in range(1000):
        #create random number series
        random_list = []
        for i in range(list_size):
            n = random.randint(0, list_size*10)
            random_list.append(n)
        #print(random_list)
        gap = increment[0]
        counts = 0
        #print(gap)
        
        #Sorting
        while gap >=1:    
            for i in range(gap-1, list_size, 1):
                tmp = random_list[i]
                j = i
                while j >= gap and random_list[j] <random_list[j-gap]:
                    random_list[j] = random_list[j-gap]
                    random_list[j-gap] = tmp
                    j-=gap
                    inversion+=1
            counts+=1
            gap = increment[counts]
        
        #print(random_list)
        random_list.clear()
        
    e_time = time.time()
    print((e_time - s_time)/1000)
    print(inversion)
main()
