public class Calcular
{
    private float distancia;
    private float tiempo;
    
    public Calcular()
    {
        this.distancia = 0;
        this.tiempo = 0;
    }
    
    public float velocidad()
    {
        return distancia / tiempo;
    }
    
    public void setDistancia(float n)
    {
        this.distancia = n;
    }
    
    public float getDistancia()
    {
        return distancia;
    }
    
    public void setTiempo(float n)
    {
        this.tiempo = n;
    }
    
    public float getTiempo()
    {
        return tiempo;
    }
}
