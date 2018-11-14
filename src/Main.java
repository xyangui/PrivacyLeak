/**
 * Project Link:
 * https://github.com/xyangui/PrivacyLeak.git
 */
public class Main {

    public static void main(String[] args) {

        question1();

        //question2();

        //question3();

        //question4();

        //question5();

        //question6();
    }

    public static void question1(){

        Movie movie = new Movie("Iron Man");
        Member Ivan = new Member(movie);

        System.out.println(Ivan.getFavouriteMovie().getTitle());

        Member Daniel = new Member(movie);
        Daniel.setFavouriteMovieTitle("Spider Man");

        System.out.println(Ivan.getFavouriteMovie().getTitle());
    }

    public static void question2(){

        Movie movie1 = new Movie("Iron Man");

        Movie movie2 = movie1;
        movie2.setTitle("Spider Man");

        System.out.println(movie1.getTitle());
    }

    public static void question3(){

        Movie movie = new Movie("Iron Man");
        Member Ivan = new Member(movie);

        System.out.println(Ivan.getFavouriteMovie().getTitle());

        Member Daniel = new Member(Ivan);
        Daniel.setFavouriteMovieTitle("Spider Man");

        System.out.println(Ivan.getFavouriteMovie().getTitle());
    }

    public static void question4(){

        Movie movie = new Movie("Iron Man");
        Member Daniel = new Member(movie);

        Movie movie1 = Daniel.getFavouriteMovie();
        movie1.setTitle("Spider Man");

        System.out.println(Daniel.getFavouriteMovie().getTitle());
    }

    public static void question5(){

        String movieTitle = "Iron Man";
        Movie movie1 = new Movie(movieTitle);

        System.out.println(movie1.getTitle());

        Movie movie2 = new Movie(movieTitle);
        movie2.setTitle("Spider Man");

        System.out.println(movie1.getTitle());
    }

    public static void question6(){

        String movieTitle = "Iron Man";
        Movie movie = new Movie(movieTitle);

        String movieTitle2 = movie.getTitle();
        movieTitle2 = "Spider Man";

        System.out.println(movie.getTitle());
    }

}
