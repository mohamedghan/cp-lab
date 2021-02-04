# N log N
cards = [10,5,8,3,9,4,12,11]
ans = []
piles = [0]*9
piles[0] = cards[0]
num_piles=1
for i in range(1, len(cards)):
    place = False
    for j in range(num_piles):
        if (piles[j] > cards[i]):
            piles[j] = cards[i]
            place = True
            break
    if(not place):
        ans.append(piles[num_piles-1])
        num_piles += 1
        piles[num_piles-1] = cards[i]
ans.append(piles[num_piles-1])
print(', '.join(map(lambda x: str(x), ans)))