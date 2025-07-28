#Add two polynomials

def add_polynomials(poly1, poly2):
    result = poly1.copy()  # Start with the first polynomial
    for power, coeff in poly2.items():
        if power in result:
            result[power] += coeff
        else:
            result[power] = coeff
    return result

def display_polynomial(poly):
    terms = []
    for power in sorted(poly.keys(), reverse=True):
        coeff = poly[power]
        if coeff != 0:
            term = f"{coeff}x^{power}" if power != 0 else f"{coeff}"
            terms.append(term)
    return " + ".join(terms) if terms else "0"


poly1 = {2: 3, 1: 5, 0: 6}
poly2 = {2: 6, 1: 3, 0: 2}

result = add_polynomials(poly1, poly2)

print("Polynomial 1:", display_polynomial(poly1))
print("Polynomial 2:", display_polynomial(poly2))
print("Sum:", display_polynomial(result))
