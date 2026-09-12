def find_longest_streak(signal_log):
    if len(signal_log) == 0:
        print("No signal data")
        return

    longest_signal = signal_log[0]
    longest_count = 1

    current_signal = signal_log[0]
    current_count = 1

    for i in range(1, len(signal_log)):

        if signal_log[i] == current_signal:
            current_count += 1
        else:
            current_signal = signal_log[i]
            current_count = 1

        if current_count > longest_count:
            longest_count = current_count
            longest_signal = current_signal

    print("Longest Streak:", longest_signal,
          "repeated", longest_count, "times")


signal_log = input("Enter signal sequence: ")

find_longest_streak(signal_log)