package lab9practice.task1;

import java.util.List;

public class Article {
    private String title;
    private String author;
    private String editor;
    private List<String> comments;
    private List<String> editorsHistory;

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
        this.editor = editor;
        this.editorsHistory.add(editor);

        if(!this.author.equals(editor)) {
            this.editorsHistory.remove(editor);
        }
    }

    private int getCommentsCount() {
        return comments.size();
    }

    private int getEditsCount() {
        int count = 0;

        for(String name: editorsHistory) {
            if(!author.equals(name)) {
                count ++;
            }

        }
        return count;
    }
}
