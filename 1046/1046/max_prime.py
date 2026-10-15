def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def main():
    max_prime = None
    while True:
        try:
            num = int(input())
            if num == 0:
                break
            if is_prime(num):
                if max_prime is None or num > max_prime:
                    max_prime = num
        except EOFError:
            break
    
    if max_prime is not None:
        print(max_prime)
    else:
        print("No prime found")

if __name__ == "__main__":
    main()