import javax.swing.JOptionPane;

public class Main
{
    public static void main(String[] args)
    {
        Calcular obj = new Calcular();
        float d, t;
        d = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite distancia: (km)"));
        obj.setDistancia(d);
        t = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite tiempo: (h)"));
        obj.setTiempo(t);
        JOptionPane.showMessageDialog(null, "Distacia: " + obj.getDistancia() + "km \n Tiempo: " + obj.getTiempo() + "h \n Velocidad: " + obj.velocidad() + "km/h");
    }
}
