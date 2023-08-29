#tic tac toe
def paint(matrix):
  print(matrix[0] + "|" + matrix[1] + "|" + matrix[2])
  print("------")
  print(matrix[3] + "|" + matrix[4] + "|" + matrix[5])
  print("------")
  print(matrix[6] + "|" + matrix[7] + "|" + matrix[8])
  print("------")

def check(matrix,char,magic_square):
  for i in range(len(matrix)):
    for j in range(len(matrix)):
      for k in range(len(matrix)):
        if i==j or i==k or j==k:
          continue ;
        if matrix[i]==matrix[j] and matrix[j]==matrix[k] and matrix[i]!=' ':
          sum = magic_square[i]+magic_square[j]+magic_square[k]
          if sum==15:
            return True
  return False

magic_square = [8,1,6,3,5,7,4,9,2]

def winner(matrix,magic_square):
  if check(matrix,'X',magic_square):
    print("Player 1 Won")
    return True
  if check(matrix,'O',magic_square):
    print("Player 2 Won")
    return True
  bb = True
  for i in range(9):
    if matrix[i]==' ':
      bb=False
  
  if bb:
    print("It's a tie")
    return True

  return False

matrix = [' ',' ',' ',' ',' ',' ',' ',' ',' ']
turn = "A"
symbol = "X"
while not winner(matrix,magic_square):
  paint(matrix)
  ind = -1
  while ind==-1:
    s = "Player "
    s = s + turn
    s = s + "'s turn "
    ind = int(input(s))
    if ind>8 or ind<0 or matrix[ind]!=' ':
      ind = -1
      print("Please Enter a valid number")
  matrix[ind]=symbol
  if turn=="A":
    turn="B"
    symbol = "O"
  else:
    turn = "A"
    symbol = "X"