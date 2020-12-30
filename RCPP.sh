FILE=a.out
if test -f "$FILE"; then
    echo "$FILE removed!"
    rm $FILE
fi
PROG_NAME=$1
re1='^.*\.cpp'
re2='^.*\.c'
echo "$1"
if [[ $1 =~ $re1 ]]; then
    echo "CPP Detected"
    eval "g++ -Wall -Wextra -pedantic -std=c++17 -O2 -Wshadow -Wformat=2 -Wfloat-equal -Wconversion -Wlogical-op -Wshift-overflow=2 -Wduplicated-cond -Wcast-qual -Wcast-align -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC -D_FORTIFY_SOURCE=2 -fsanitize=address -fsanitize=undefined -fno-sanitize-recover -fstack-protector $PROG_NAME"

elif [[ $1 =~ $re2 ]]; then
    echo "C Detected"
    eval "gcc -Wall -Wextra -pedantic -std=c99 -O2 -Wshadow -Wformat=2 -Wfloat-equal -Wconversion -Wlogical-op -Wshift-overflow=2 -Wduplicated-cond -Wcast-qual -Wcast-align -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC -D_FORTIFY_SOURCE=2 -fsanitize=address -fsanitize=undefined -fno-sanitize-recover -fstack-protector $PROG_NAME"
fi

if test -f "$FILE"; then
    ./$FILE < input.txt > output.txt
fi