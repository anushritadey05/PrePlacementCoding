#Multiply two polynomials

def multiply_polynomials(poly1, poly2):
    result = {}

    for power1, coeff1 in poly1.items():
        for power2, coeff2 in poly2.items():
            power = power1 + power2
            coeff = coeff1 * coeff2
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


poly1 = {1: 2, 0: 3}
poly2 = {2: 4, 0: 1}

result = multiply_polynomials(poly1, poly2)

print("Polynomial 1:", display_polynomial(poly1))
print("Polynomial 2:", display_polynomial(poly2))
print("Product:", display_polynomial(result))
