
    import java.util.*

    fun main(args: Array<String>) {
        val scanner = Scanner(System.`in`)
        val np = scanner.nextInt()
        val k = scanner.nextInt()
        val arr = IntArray(np) { scanner.nextInt() }.sorted()
        if (k == 0) {
            if (arr[0] > 1)
                print(1)
            else
                print(-1)
        }
        else if (k == np || arr[k - 1] != arr[k])
            print(arr[k - 1])
        else
            print(-1)
    }
