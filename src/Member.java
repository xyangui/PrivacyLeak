
public class Member {

    private Movie favouriteMovie;

    public Member(Movie favouriteMovie) {
        this.favouriteMovie = favouriteMovie;
    }

    public Member(Member member) {
        this.favouriteMovie = member.favouriteMovie;
    }

    public Movie getFavouriteMovie() {
        return favouriteMovie;
    }

    public void setFavouriteMovie(Movie favouriteMovie) {
        this.favouriteMovie = favouriteMovie;
    }

    public void setFavouriteMovieTitle(String favouriteMovieTitle) {
        favouriteMovie.setTitle(favouriteMovieTitle);
    }



//    public Member(Member member) {
//        this.favouriteMovie = member.getFavouriteMovie();
//    }



//    public Movie getFavouriteMovie() {
//        return new Movie(favouriteMovie.getTitle());
//    }

}
