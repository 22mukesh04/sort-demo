def selectionSort(lst):
    for i in range(0,len(lst)-1):
        minIndex = i
        for j in range(i+1,len(lst)):
            if lst[j] < lst[minIndex]:
                minIndex = j
        if minIndex != i :
            lst[minIndex],lst[i] = lst[i],lst[minIndex]

def bubbleSort(lst):
    for i in range(0, len(lst)-1):
        swap = 0
        for j in range(len(lst) - 1 , i ,-1):
            if lst[j] < lst[j - 1]:
                swap = 1
                lst[j],lst[j - 1] = lst[j - 1],lst[j]
        if swap == 0:
            break
        

def insertionSort(lst):
    for i in range(1, len(lst)):
        temp = lst[i]
        j = i - 1
        while j >= 0 and lst[j] > temp:
            lst[j+1] = lst[j]
            j = j-1
        lst[j+1] = temp

def main():
    #['Vijaya', 'Sanvi', 'Ruby', 'Zafar', 'Maya', 'Anya']
    #['501','1999','250','504','509','501']
    #[501,1999,250,504,509,501]
    lst = eval(input(" Enter a list :  "))
    print('Sorted List') 
    bubbleSort(lst)
    print(lst)
if __name__ == '__main__' :
    main()