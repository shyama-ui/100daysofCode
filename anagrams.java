static boolean isAnagram(String a, String b) {
        if ( a.length() != b.length() ) {
            return false; 
        }
        String a1=a.toLowerCase();
        String a2=b.toLowerCase();
        char[] c1 = a1.toCharArray();
        char[] c2 = a2.toCharArray();
        java.util.Arrays.sort(c1);
        java.util.Arrays.sort(c2);
        String str1 = new String(c1);
        String str2 = new String(c2);
        return str1.equals(str2);