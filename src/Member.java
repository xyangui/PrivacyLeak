
public class Member {

    private Movie favouriteMovie;

    public Member(Movie movie) {
        this.favouriteMovie = movie;
    }

    public Member(Member member) {
        this.favouriteMovie = member.getFavouriteMovie();
    }

    public Movie getFavouriteMovie() {
        return favouriteMovie;
    }

    public void setFavouriteMovie(Movie movie) {
        this.favouriteMovie = movie;
    }

    public void setFavouriteMovieTitle(String movieTitle) {
        favouriteMovie.setTitle(movieTitle);
    }



//    public Movie getFavouriteMovie() {
//        return new Movie(favouriteMovie.getTitle());
//    }

}
