Many people are trying to implement defer macro in C. To achieve this they basically need to use proprietary compiler extensions or long jumping. In many cases simple `with` block would suffice.

## Usage

Just include the file (or simply copy the oneliner) and invoke with `WITH(<initial statement>, <cleanup statement>)`.

## Control Flow

If you want to exit the `With` block early you should use `continue` in case you wish to execute the 'after' expression and `break` in case you wish to exit the block without executing it.

## Example

### Python where block

```
with open('example.txt', 'r') as file:
    # Do stuff with file
```

### Translated to C

```
WITH(FILE* file = fopen("example.txt", "r"), fclose(file)) {
    // Do stuff with file
}
```
