
    import java.util.*

    fun main(args: Array<String>) {
        val scanner = Scanner(System.`in`)
        scanner.nextInt()
        val str = scanner.next()
        val da = IntArray(676)
        var c = str[0]
        for (i in 1 until str.length) {
            da[(c - 'A') * 26 + (str[i] - 'A')]++
            c = str[i]
        }
        val a = da.indexOf(da.max()!!)
        println("${'A' + a / 26}${('A' + a % 26)}")
    }
