'''m=int(input("enter the number of rows"))
n=int(input("enter the number of columns"))

for i in range(0,m):
    for j in range(0,n):
        arr[i][j]=int(input("values"))
        print (arr[i][j])
 '''

# Program to add two matrices using nested loop
'''
X = [[12,7,3],
    [4 ,5,6],
    [7 ,8,9]]

Y = [[5,8,1],
    [6,7,3],
    [4,5,9]]

result = [[0,0,0],
         [0,0,0],
         [0,0,0]]

# iterate through rows
for i in range(len(X)):
   # iterate through columns
   for j in range(len(X[0])):
       result[i][j] = X[i][j] + Y[i][j]

    for r in result :
        print(r)

'''

class Matrix:
    '''Class for matrix operations'''

    def __init__(self, lofl, m, n):
        '''Initializes the matrix.

        lofl: List of lists
        m: Number of rows in the matrix
        n: Number of columns in the matrix
        '''

        assert len(lofl) == m
        for row in lofl:
            assert len(row) == n

        self.lofl = lofl
        self.m = m
        self.n = n

    def __add__(self, mat):
        assert self.m == mat.m
        assert self.n == mat.n
        # Write similar assertions in other methods

        X = [[12, 7, 3],
             [4, 5, 6],
             [7, 8, 9]]

        Y = [[5, 8, 1],
             [6, 7, 3],
             [4, 5, 9]]

        result = [[0, 0, 0],
                  [0, 0, 0],
                  [0, 0, 0]]

        # iterate through rows
        for i in range(len(X)):
            # iterate through columns
            for j in range(len(X[0])):
                result[i][j] = X[i][j] + Y[i][j]

            for r in result:
                print(r)

    def __sub__(self, mat):
        # Your code here

    def __mul__(self, mat):
        # Your code here


    def __str__(self):
        stri = ''
        for i, row in enumerate(self.lofl):
            for j, elem in enumerate(row):
                stri += str(elem) + ' '
            stri += '\n'

        return stri