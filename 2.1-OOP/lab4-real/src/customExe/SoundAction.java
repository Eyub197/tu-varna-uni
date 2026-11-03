package customExe;

public class SoundAction implements AnimalAction{
    @Override
    public String execute(Animal animal) {
        return animal.sound();
    }
}
