import java.util.HashMap;

class Product{
    String name;
    int productId, available_quantity;
    float price;

    Product(int productId, String name, float price, int available_quantity){
        this.productId = productId;
        this.name = name;
        this.price = price;
        this.available_quantity = available_quantity;
    }

    void update_price(float updated_price){
        this.price = updated_price;
    }
    void displayProduct(){
        System.out.println("Product ID: " + productId);
        System.out.println("Product Name: " + name);
        System.out.println("Product Price: " + price);
        System.out.println("Quantity: " + available_quantity + "\n");
    }
}

public class problem5 {
    public static void main(String[] args){
        HashMap<Integer, Product> catalogue = new HashMap<>();
        
        Product product_1 = new Product(01, "camera", 20000, 1);
        Product product_2 = new Product(02, "corona", 320, 20);
        Product product_3 = new Product(03, "chips", 20, 40);

        catalogue.put(product_1.productId, product_1);
        catalogue.put(product_2.productId, product_2);
        catalogue.put(product_2.productId, product_2);
        catalogue.put(product_3.productId, product_3);

        catalogue.get(02).displayProduct();
        catalogue.get(02).price = 120;

        catalogue.remove(01);

        System.out.println("All Products:\n------------");
        for(int key : catalogue.keySet()){
            catalogue.get(key).displayProduct();
        }
        
    }
}