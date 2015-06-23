import sys
#time.sleep很好用

def card_number(length):
  n = 2
  length_sum = 0
  if length < 0 :
    printf ("something wrong\n")
  else:
    while length_sum < length:
      a = 1.00/n
      length_sum  = length_sum + a
      n = n + 1
  return n
  
for line in sys.stdin:
  line = line.split('\n')
  if float(line[0]) != 0 :
    cards = card_number(float(line[0]))
    print str(cards-2)
