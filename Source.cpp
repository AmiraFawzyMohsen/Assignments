}
            }

        }
    } 
    catch (FileNotFoundException ex) 
    {
        ex.printStackTrace();
    }

    for (int i = 0; i < letterCount.length; i++) 
    {
        System.out.println((char)(i + 'A') + " occurrence = " + letterCount[i]);
    }

}

private static boolean isLetter(char ch) 
{

    return (ch >= 'A' && ch <= 'Z');
}
}
