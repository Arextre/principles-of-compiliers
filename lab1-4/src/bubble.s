        .text
        .align  1
        .globl  bubblesort
        .type   bubblesort, @function
bubblesort:
        addi    a1, a1, -1      # i = n - 1
        ble     a1, zero, .L2   # if i <= 0, goto L2
.L_outer:
        li      t0, 0           # t0 = &j = 0
        mv      t1, a0          # store base address
.L_inner:
        slli    t2, t0, 2       # t2 = j << 2
        add     t3, a0, t2      # t3 = &arr[j]
        lw      t4, 0(t3)       # t4 = arr[j]
        lw      t5, 4(t3)       # t5 = arr[j + 1]
        ble     t4, t5, .L_no_swap
        sw      t5, 0(t3)
        sw      t4, 4(t3)
.L_no_swap:
        addi    t0, t0, 1       # j++
        blt     t0, a1, .L_inner
        addi    a1, a1, -1      # i--
        bgt     a1, zero, .L_outer
.L2:
        li      a0,0
        ret
        .size   bubblesort, .-bubblesort
