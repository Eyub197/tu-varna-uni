package lab9practice.task2;

import java.util.ArrayList;
import java.util.List;

public class Blog {
    private static List<Article> articles = new ArrayList<>();

    private static void addArticle(Article article) {
        articles.add(article);
    }

    private static void editArticle(String title, String editor, String newTitle) {

        int commentsCount = 0;

        articles.forEach(article -> {
            if (article.getTitle().equals(title)) {
                article.edit(editor, newTitle);
            }
        });


    }

    public static String findAuthorWithMostComments() {
        Map<String, Integer> counts = new LinkedHashMap<>();

        for (Article article : articles) {
            String author = article.getAuthor();
            int total = counts.getOrDefault(author, 0) + article.getComments();
            counts.put(author, total);
        }

        return findNameWithHighestCount(counts);
    }

}
