goals = [0, 0]
team2 = ''
team1 = ''
for i in range(int(input())):
    if (i == 0):
        team1 = input()
        goals[0] += 1
    else:
        string = input()
        if (team1 != string):
            team2 = string
            goals[1] += 1
        else:
            goals[0] += 1
if (goals[0] > goals[1]):
    print(team1)
else:
    print(team2)
