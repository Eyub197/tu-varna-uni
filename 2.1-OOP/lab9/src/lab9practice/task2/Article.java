package lab9practice.task2;

import java.util.List;

public class Article {
    private String title;
    private final String author;
    private String editor;
    private final List<String> comments;
    private final List<String> editorsHistory;

    public Article(String title, String author, String editor, List<String> comments, List<String> editorsHistory) {
        this.title = title;
        this.author = author;
        this.editor = editor;
        this.comments = comments;
        this.editorsHistory = editorsHistory;
    }

    public String getTitle() {
        return title;
    }

    public String getAuthor() {
        return author;
    }

    public String getEditor() {
        return editor;
    }

    public List<String> getComments() {
        return comments;
    }

    public List<String> getEditorsHistory() {
        return editorsHistory;
    }

    private void addComment(String comment) {
        comments.add(comment);
    }

    private void edit(String editor, String newTitle) {
        this.title = newTitle;
        this.editorsHistory.add(editor);

        if(!this.author.equals(editor)) {
            this.editorsHistory.remove(editor);
        }
    }
}
