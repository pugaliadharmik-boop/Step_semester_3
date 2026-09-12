def reverse_customer_name(customer_name):

    reversed_name = customer_name[::-1]

    print("Original Name:", customer_name)
    print("Reversed Name:", reversed_name)


name = input("Enter customer name: ")

reverse_customer_name(name)