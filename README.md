# Sample data
list_of_available_books = ["Book A", "Book B", "Book C"]
patron_borrowing_record = {}
borrowing_limit = 3

# Display available books
print("List of Available Books")
print(list_of_available_books)

# Prompt user input
patron_name = input("Enter your name: ")
selected_book = input("Enter the book you want to borrow: ")

# Count how many books the patron has already borrowed
patron_borrowed_count = len(patron_borrowing_record.get(patron_name, []))

# Check availability and limits
if selected_book in list_of_available_books:
    if patron_borrowed_count < borrowing_limit:
        print("Borrowing Successful")
        list_of_available_books.remove(selected_book)
        patron_borrowing_record.setdefault(patron_name, []).append(selected_book)
    else:
        print("Borrowing limit reached")
else:
    print("Book not available")

# Debug: show updated records
print("\nUpdated Available Books:", list_of_available_books)
print("Patron Borrowing Record:", patron_borrowing_record)
