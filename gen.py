def generate_test_cases():
    import random

    test_cases = []
    for _ in range(20):
        n = random.randint(1, 100)
        k = random.randint(1, 100)
        test_cases.append((n, k))

    with open("input.txt", "w") as f:
        for n, k in test_cases:
            f.write(f"{n} {k}\n")

generate_test_cases()
