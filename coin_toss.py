import random

def toss_coin():
    return "Heads" if random.choice([True, False]) else "Tails"

heads_count = 0
tails_count = 0

print("Tossing a coin...")
for round in range(1, 4):
    result = toss_coin()
    print(f"Round {round}: {result}")
    if result == "Heads":
        heads_count += 1
    else:
        tails_count += 1

print(f"Heads: {heads_count}, Tails: {tails_count}")
