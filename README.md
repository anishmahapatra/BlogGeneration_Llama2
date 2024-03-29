# BlogGeneration_Llama2

**Author:** Anish Mahapatra ([LinkedIn](https://www.linkedin.com/in/anishmahapatra/))

**Reference:** https://www.youtube.com/watch?v=aWKrL4z5H6w&t=6070s

This Streamlit application uses a Llama2 GGML model from Hugging Face to generate blogs on a given topic.

## Instructions

1. **Clone Repository:** `git clone https://github.com/anishmahapatra/BlogGeneration_Llama2.git`

2. **Download Llama2 Model:** Download the `llama-2-7b.ggmlv3.q8_0.bin` model from https://huggingface.co/TheBloke/Llama-2-7B-GGML/tree/main and place it in the `models` folder within the repository.

3. **Activate Virtual Environment:** Create and activate a virtual environment named `llama2`.

4. **Install Dependencies:** `pip install requirements.txt`

5. **Run Application:** `streamlit run app.py`

## Usage

Once the application is running, you can:

* Enter a blog topic in the text input field.
* Specify the desired number of words.
* Select the target audience for the blog.
* Click the "Generate" button to generate the blog.

## Note

This application requires the `langchain` and `streamlit` packages to be installed.